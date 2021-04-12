//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary;

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand
{
}

+ (id)multilingualSpeechRecognizedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)multilingualSpeechRecognized;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSDictionary *speechRecognizedByLanguage;
@property(nonatomic) BOOL multilingualDisabled;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

