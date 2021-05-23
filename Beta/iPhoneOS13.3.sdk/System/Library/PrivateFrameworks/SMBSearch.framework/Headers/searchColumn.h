/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class rowVariant;

@interface searchColumn : NSObject

{
    int _propNumber;
    rowVariant *_propValue;
}

@property int propNumber;
@property (retain) rowVariant *propValue;

- (id)initWithPropertyNumber:(int)arg1 RVariant:(id)arg2;

@end
