/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class cNodeRestriction;

@interface cnodeBuilder : NSObject

{
    unsigned int _ulType;
    unsigned int _weight;
    cNodeRestriction *_rootNode;
}

@property unsigned int ulType;
@property unsigned int weight;
@property (retain) cNodeRestriction *rootNode;

- (id)initWithType:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (int)appendRestriction:(id)arg1;

@end
