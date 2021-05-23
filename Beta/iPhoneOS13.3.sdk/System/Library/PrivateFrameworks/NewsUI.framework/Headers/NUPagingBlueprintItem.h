/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUPage;

@interface NUPagingBlueprintItem : NSObject

{
    id <NUPage> _page;
    NSString *_identifier;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) id <NUPage> page;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPage:(id)arg1;
- (id)initWithPageID:(id)arg1;

@end
