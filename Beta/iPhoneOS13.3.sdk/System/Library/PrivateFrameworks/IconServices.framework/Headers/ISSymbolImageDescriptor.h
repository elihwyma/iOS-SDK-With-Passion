/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ISSymbolImageDescriptor : NSObject

{
    double _pointSize;
    double _scale;
    unsigned long long _size;
    long long _weight;
}

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long size;
@property (nonatomic) long long weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;

@end
