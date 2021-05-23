/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface vtVector : NSObject

{
    unsigned int _vVectorElements;
    NSMutableArray *_vVectorData;
}

@property unsigned int vVectorElements;
@property (retain) NSMutableArray *vVectorData;

- (id)init;
- (int)addElement:(id)arg1;

@end
