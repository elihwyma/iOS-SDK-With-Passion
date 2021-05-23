/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VUITVSeriesManagedObject : NSManagedObject

@property (copy, nonatomic) NSString *canonicalID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSSet *episodes;
@property (retain, nonatomic) NSSet *imageInfos;
@property (retain, nonatomic) NSSet *seasons;

+ (id)fetchRequest;

@end
