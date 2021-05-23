/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface searchResults : NSObject

{
    NSMutableArray *_rows;
}

@property (retain) NSMutableArray *rows;

- (id)init;

@end
