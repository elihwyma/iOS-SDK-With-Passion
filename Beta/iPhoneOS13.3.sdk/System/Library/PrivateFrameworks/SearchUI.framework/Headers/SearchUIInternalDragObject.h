/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SearchUIRowModel;

@interface SearchUIInternalDragObject : NSObject

{
    SearchUIRowModel *_dragObject;
}

@property (retain) SearchUIRowModel *dragObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)writableTypeIdentifiersForItemProvider;

- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDragObject:(id)arg1;
- (_Bool)shouldShareDragURL;

@end
