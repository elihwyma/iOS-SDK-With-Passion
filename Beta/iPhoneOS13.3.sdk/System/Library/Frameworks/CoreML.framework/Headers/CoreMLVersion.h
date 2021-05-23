/*
 Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

#import <NSObject.h>

@class NSNumber;

@interface CoreMLVersion : NSObject

{
    NSNumber *_frameworkVersionNumber;
}

@property (copy, nonatomic) NSNumber *frameworkVersionNumber;

+ (id)getInternalFrameworkVersion;

- (id)init;

@end
