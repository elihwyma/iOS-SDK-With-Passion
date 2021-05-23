/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CRKMobileGestalt : NSObject

@property (copy, nonatomic, readonly) NSString *serialNumber;
@property (nonatomic, readonly) double mainScreenScale;
@property (nonatomic, readonly) struct CGSize mainScreenSizeInPixels;
@property (nonatomic, readonly) unsigned long long availableBytes;

+ (id)sharedGestalt;

- (id)answerForQuestion:(struct __CFString *)arg1 ofClass:(Class)arg2;
- (id)answerForQuestion:(struct __CFString *)arg1;

@end
