/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_data, OS_nw_content_context;

@interface NWMessage : NSObject

{
    NSObject<OS_dispatch_data> *_internalContent;
    NSObject<OS_nw_content_context> *_internalContext;
}

@property (retain, nonatomic) NSObject<OS_dispatch_data> *internalContent;
@property (retain, nonatomic) NSObject<OS_nw_content_context> *internalContext;

- (id)initWithContent:(id)arg1 context:(id)arg2;

@end
