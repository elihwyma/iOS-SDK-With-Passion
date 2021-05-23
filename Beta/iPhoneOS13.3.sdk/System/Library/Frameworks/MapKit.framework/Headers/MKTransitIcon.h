/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MKTransitIcon : NSObject

{
    unsigned int _cartoID;
    unsigned int _defaultTransitType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int iconType;
@property (nonatomic, readonly) unsigned int cartoID;
@property (nonatomic, readonly) unsigned int defaultTransitType;
@property (nonatomic, readonly) unsigned int iconAttributeKey;
@property (nonatomic, readonly) unsigned int iconAttributeValue;

- (id)initWithCartoId:(unsigned int)arg1 defaultTransitType:(unsigned int)arg2;

@end
