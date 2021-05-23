/*
 Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

#import <CoreData/NSManagedObject.h>

@class NSString, TDPhotoshopRenditionSpec;

@interface TDPhotoshopLayer : NSManagedObject

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) TDPhotoshopLayer *childLayer;
@property (retain, nonatomic) TDPhotoshopLayer *parentLayer;
@property (retain, nonatomic) TDPhotoshopRenditionSpec *rendition;

- (id)hierarchicalLayerNames;

@end
