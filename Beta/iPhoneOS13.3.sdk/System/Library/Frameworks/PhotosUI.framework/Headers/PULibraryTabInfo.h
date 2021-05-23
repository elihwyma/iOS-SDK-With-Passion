/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PULibraryTabInfo : NSObject

{
    int _contentMode;
    NSString *_labelKey;
    NSString *_iconName;
}

@property (nonatomic, readonly) NSString *labelKey;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) NSString *landscapeIconName;
@property (nonatomic, readonly) int contentMode;

+ (id)tabInfoWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3;

- (id)initWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3;

@end
