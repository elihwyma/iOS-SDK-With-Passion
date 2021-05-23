/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMNoteLimits : FATObject

{
    NSNumber *_noteResourceCountMax;
    NSNumber *_uploadLimit;
    NSNumber *_resourceSizeMax;
    NSNumber *_noteSizeMax;
    NSNumber *_uploaded;
}

@property (retain, nonatomic) NSNumber *noteResourceCountMax;
@property (retain, nonatomic) NSNumber *uploadLimit;
@property (retain, nonatomic) NSNumber *resourceSizeMax;
@property (retain, nonatomic) NSNumber *noteSizeMax;
@property (retain, nonatomic) NSNumber *uploaded;

+ (id)structName;
+ (id)structFields;

@end
