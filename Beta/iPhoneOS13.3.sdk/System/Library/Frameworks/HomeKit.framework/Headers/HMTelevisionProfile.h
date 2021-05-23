/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessoryProfile.h>

@class NSArray, NSString;

@protocol HMTelevisionProfileDelegate;

@interface HMTelevisionProfile : HMAccessoryProfile

{
    id <HMTelevisionProfileDelegate> _delegate;
}

@property (readonly) NSArray *mediaSourceDisplayOrder;
@property (readonly) _Bool mediaSourceDisplayOrderModifiable;
@property (weak) id <HMTelevisionProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)initWithTelevisionService:(id)arg1 linkedServices:(id)arg2;
- (void)televisionProfileDidUpdateSourceDisplayOrder:(id)arg1;
- (void)updateMediaSourceDisplayOrder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
