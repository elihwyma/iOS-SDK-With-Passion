/*
 Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABEKParticipantMatchingSearchOperationDelegate : NSObject

{
    CDUnknownBlockType _completionHandler;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;

@end
