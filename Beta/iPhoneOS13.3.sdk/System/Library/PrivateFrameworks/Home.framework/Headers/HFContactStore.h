/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

@class CNContactStore;

@interface HFContactStore : NSObject

{
    CNContactStore *_contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (nonatomic, readonly) CNContactStore *backingStore;

+ (id)defaultStore;

- (id)init;
- (id)_meContactWithEmailAddress:(id)arg1 keys:(id)arg2;
- (id)contactForEmailAddress:(id)arg1 withKeys:(id)arg2;
- (id)_fallbackContactWithEmailAddress:(id)arg1 phoneNumber:(id)arg2;
- (id)contactForUserHandle:(id)arg1 withKeys:(id)arg2;
- (id)contactForPhoneNumber:(id)arg1 withKeys:(id)arg2;

@end
