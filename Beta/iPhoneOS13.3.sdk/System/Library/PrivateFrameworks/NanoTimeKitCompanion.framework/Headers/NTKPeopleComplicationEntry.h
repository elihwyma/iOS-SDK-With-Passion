/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSString, UIImage;

@interface NTKPeopleComplicationEntry : NTKTimelineEntryModel

{
    NSString *_fullName;
    NSString *_abbreviation;
    UIImage *_profileImage;
    _Bool _isLocked;
}

@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *abbreviation;
@property (nonatomic, readonly) UIImage *profileImage;

+ (id)lockedEntry;

- (id)templateForComplicationFamily:(long long)arg1;
- (id)initWithFullName:(id)arg1 abbreviation:(id)arg2 profileImage:(id)arg3;

@end
