/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface searchRow : NSObject

{
    NSMutableDictionary *_columns;
}

@property (retain) NSMutableDictionary *columns;

- (id)init;

@end
