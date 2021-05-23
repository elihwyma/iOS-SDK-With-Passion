/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <CoreData/NSManagedObject.h>

@class CLSManagedPublicEvent, NSString;

@interface CLSManagedPublicEventPerformer : NSManagedObject

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *iTunesIdentifier;
@property (retain, nonatomic) CLSManagedPublicEvent *publicEvent;

+ (id)entityName;

@end
