/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface PXContextualMemoriesPeopleSetting : NSObject

{
    NSArray *_peopleNames;
}

@property (retain, nonatomic) NSArray *peopleNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (id)init;
- (void)resetToDefault;
- (void)requestPeopleNamesUpdateSinceDate:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
