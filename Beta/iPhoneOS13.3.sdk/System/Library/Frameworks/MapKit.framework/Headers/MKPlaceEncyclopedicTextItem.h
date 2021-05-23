/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicTextItem : NSObject

{
    NSString *label;
    NSString *value;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *value;

+ (id)textItemWithLabel:(id)arg1 value:(id)arg2;

@end
