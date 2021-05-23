/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class ENWebResource, NSArray;

@interface ENWebArchive : NSObject

{
    ENWebResource *_mainResource;
    NSArray *_subresources;
    NSArray *_subframeArchives;
}

@property (retain, nonatomic) ENWebResource *mainResource;
@property (retain, nonatomic) NSArray *subresources;
@property (retain, nonatomic) NSArray *subframeArchives;

+ (id)webArchiveWithData:(id)arg1;
+ (id)webArchiveWithDictionary:(id)arg1;

- (id)data;
- (id)propertyList;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;

@end
