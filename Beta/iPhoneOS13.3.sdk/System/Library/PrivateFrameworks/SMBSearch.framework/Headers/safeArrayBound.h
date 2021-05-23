/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface safeArrayBound : NSObject

{
    unsigned int _cElements;
    unsigned int _lowBound;
}

@property unsigned int cElements;
@property unsigned int lowBound;

- (id)initWithElements:(unsigned int)arg1 LowBound:(unsigned int)arg2;

@end
