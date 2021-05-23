/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TIRevisionHistoryToken : NSObject

{
    _Bool _accepted;
    unsigned int _usageLearningMask;
    unsigned int _usageTrackingMask;
    NSString *_tokenInputString;
    unsigned long long _offset;
    struct TITokenID _tokenID;
    NSString *_tokenDictionaryString;
    NSString *_userTyping;
}

@property (copy, nonatomic) NSString *tokenInputString;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) struct TITokenID tokenID;
@property (copy, nonatomic) NSString *tokenDictionaryString;
@property (copy, nonatomic) NSString *userTyping;
@property (nonatomic) unsigned int usageLearningMask;
@property (nonatomic) unsigned int usageTrackingMask;
@property (nonatomic, getter=isAccepted) _Bool accepted;

- (id)description;

@end
