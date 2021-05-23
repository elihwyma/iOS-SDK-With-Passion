/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSSet, NSUUID;

@interface TITextCheckerExemptionsImpl : NSObject

{
    CDUnknownBlockType _contactObserver;
    id _userDictionaryObserver;
    unsigned long long _observerAssertionCount;
    NSSet *_addressBookTokens;
    NSSet *_userDictionaryTokens;
    NSUUID *_userDictionaryUUID;
}

@property (retain, nonatomic) NSSet *addressBookTokens;
@property (retain, nonatomic) NSSet *userDictionaryTokens;
@property (copy, nonatomic) NSUUID *userDictionaryUUID;

+ (id)sharedTextCheckerExemptionsImpl;

- (void)dealloc;
- (_Bool)stringIsExemptFromChecker:(id)arg1;
- (void)addObserverAssertion;
- (void)removeObserverAssertion;

@end
