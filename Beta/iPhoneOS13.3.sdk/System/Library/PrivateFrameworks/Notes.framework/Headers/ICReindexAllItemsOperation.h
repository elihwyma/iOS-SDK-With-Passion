/*
 Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <Notes/ICIndexItemsOperation.h>

@class NSData;

@interface ICReindexAllItemsOperation : ICIndexItemsOperation

{
    NSData *_clientStateData;
}

@property (readonly) NSData *clientStateData;

- (void)main;

@end
