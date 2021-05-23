/*
 Image: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface NFLCellPropertyPlistProvider : NSObject

{
    NSMutableDictionary *_plistsByName;
}

@property (retain, nonatomic) NSMutableDictionary *plistsByName;

- (id)init;
- (id)plistWithName:(id)arg1;

@end
