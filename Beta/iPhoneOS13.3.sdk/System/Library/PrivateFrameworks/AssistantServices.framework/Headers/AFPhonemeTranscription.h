/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AFPhonemeTranscription : NSObject

{
    NSString *_orthography;
    NSString *_language;
    NSArray *_phonemeSuggestions;
}

@property (retain, nonatomic) NSString *orthography;
@property (retain, nonatomic) NSString *language;
@property (retain, nonatomic) NSArray *phonemeSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
