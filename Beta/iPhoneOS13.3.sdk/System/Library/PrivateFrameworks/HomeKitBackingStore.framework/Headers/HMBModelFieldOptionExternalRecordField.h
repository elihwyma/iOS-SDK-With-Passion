/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HomeKitBackingStore/HMBModelFieldOption.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMBModelFieldOptionExternalRecordField : HMBModelFieldOption

{
    _Bool _encrypted;
    NSString *_fieldName;
}

@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) _Bool encrypted;

- (void)applyTo:(id)arg1;
- (id)initWithExternalRecordField:(id)arg1 encrypted:(_Bool)arg2;

@end
