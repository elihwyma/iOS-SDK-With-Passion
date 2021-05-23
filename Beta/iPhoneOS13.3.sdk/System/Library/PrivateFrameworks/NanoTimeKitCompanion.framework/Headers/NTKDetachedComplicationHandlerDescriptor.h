/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, NTKComplication;

@protocol NTKTemplateComplicationDisplay;

@interface NTKDetachedComplicationHandlerDescriptor : NSObject

{
    NSString *_identifier;
    long long _family;
    NTKComplication *_complication;
    id <NTKTemplateComplicationDisplay> _display;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long family;
@property (retain, nonatomic) NTKComplication *complication;
@property (weak, nonatomic) id <NTKTemplateComplicationDisplay> display;
@property (copy, nonatomic) NSString *bundleIdentifier;

@end
