/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface VUIDocumentContextData : NSObject

{
    NSDictionary *_contextDataDict;
}

@property (copy, nonatomic) NSDictionary *contextDataDict;

- (id)initWithDictionary:(id)arg1;
- (id)jsonData;

@end
