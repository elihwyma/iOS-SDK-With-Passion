/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VUIDocumentPreFetchedData : NSObject

{
    NSDictionary *_prefetchedDataDict;
}

@property (copy, nonatomic) NSDictionary *prefetchedDataDict;

- (id)initWithDictionary:(id)arg1;
- (id)jsonData;

@end
