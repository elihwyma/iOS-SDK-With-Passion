/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PHFetchResult;

@interface PXPeopleDetailSettingsPersonDataSource : NSObject

{
    NSString *_title;
    PHFetchResult *_persons;
}

@property (retain, nonatomic) PHFetchResult *persons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, readonly) _Bool hasMoreDetails;
@property (nonatomic, readonly) long long action;

- (void)imageAtIndex:(unsigned long long)arg1 targetSize:(struct CGSize)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)personNameAtIndex:(long long)arg1;
- (unsigned long long)faceCount:(long long)arg1;
- (long long)verifyTypeAtIndex:(long long)arg1;
- (id)modelObjectForIndex:(long long)arg1;
- (id)initWithTitle:(id)arg1 persons:(id)arg2;

@end
