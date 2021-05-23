/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

@interface TSWPImageBulletProvider : NSObject

{
    NSMutableArray *_images;
    NSMutableArray *_filenames;
}

@property (nonatomic, readonly) NSArray *predefinedImages;

+ (id)sharedInstance;

- (id)p_predefinedImageNames;
- (id)p_pathToPredefinedImages;
- (id)dataForImageBullet:(id)arg1 withContext:(id)arg2;
- (id)dataForDefaultImageBulletWithContext:(id)arg1;

@end
