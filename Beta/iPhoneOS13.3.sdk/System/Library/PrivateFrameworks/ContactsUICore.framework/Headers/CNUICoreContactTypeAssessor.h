/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class CNFuture;

@interface CNUICoreContactTypeAssessor : NSObject

{
    CNFuture *_familyInfoFuture;
}

@property (nonatomic, readonly) CNFuture *familyInfoFuture;

+ (id)keysToFetch;

- (id)init;
- (id)initWithFamilyInfoFuture:(id)arg1;
- (long long)estiamtedTypeOfContact:(id)arg1;
- (id)initWithFamilyInfo:(id)arg1;

@end
