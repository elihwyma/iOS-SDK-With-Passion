/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <CoreData/NSManagedObject.h>

@class NSString, VUIImageDataManagedObject;

__attribute__((visibility("hidden")))
@interface VUIImageInfoManagedObject : NSManagedObject

@property (nonatomic) double canonicalHeight;
@property (nonatomic) double canonicalWidth;
@property (nonatomic) long long imageType;
@property (copy, nonatomic) NSString *urlFormat;
@property (retain, nonatomic) VUIImageDataManagedObject *imageData;

+ (id)fetchRequest;

@end
