/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationConnectionOptions : NSObject

{
    _Bool _secureInput;
    _Bool _useAutomaticEndpointing;
    _Bool _acceptsDictationSearchResults;
    unsigned long long _version;
    unsigned long long _activationType;
    NSString *_languageCode;
    NSString *_regionCode;
    NSString *_fieldIdentifier;
    NSString *_activationIdentifier;
    NSString *_layoutIdentifier;
    long long _keyboardType;
    long long _returnKeyType;
    NSString *_prefixText;
    NSString *_selectedText;
    NSString *_postfixText;
}

@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long activationType;
@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *regionCode;
@property (copy, nonatomic) NSString *fieldIdentifier;
@property (copy, nonatomic) NSString *activationIdentifier;
@property (copy, nonatomic) NSString *layoutIdentifier;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (nonatomic) _Bool secureInput;
@property (nonatomic) _Bool useAutomaticEndpointing;
@property (nonatomic) _Bool acceptsDictationSearchResults;
@property (copy, nonatomic) NSString *prefixText;
@property (copy, nonatomic) NSString *selectedText;
@property (copy, nonatomic) NSString *postfixText;

@end
