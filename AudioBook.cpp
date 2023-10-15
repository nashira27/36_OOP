#include "AudioBook.h"

AudioBook::AudioBook(){};
AudioBook::AudioBook(string title, string authorName, string voiceActor)
:Book(title, authorName), voiceActor(voiceActor){};
        
string AudioBook::getVoiceActor(){
    return this->voiceActor;
}
        
void AudioBook::setVoiceActor(string voiceActor){
    this->voiceActor = voiceActor;
}

void AudioBook::printDescription() {
    cout << "Audio book Title: " << getTitle() << endl;
    cout << "Author: " << getAuthorName() << endl;
    cout << "VoiceActor: " << getVoiceActor() << endl;
}