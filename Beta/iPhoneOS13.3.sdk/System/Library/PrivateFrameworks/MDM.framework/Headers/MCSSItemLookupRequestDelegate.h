/*
 Image: /System/Library/PrivateFrameworks/MDM.framework/MDM
 */

#import <MDM/MCSSRequestDelegate.h>

@class NSArray, NSString, SSItemLookupRequest;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate

{
    NSArray *_items;
}

@property (retain, nonatomic, readonly) SSItemLookupRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)instance;

- (void)itemLookupRequest:(id)arg1 didFindItems:(id)arg2;
- (void)startCompletionBlock:(CDUnknownBlockType)arg1;

@end
