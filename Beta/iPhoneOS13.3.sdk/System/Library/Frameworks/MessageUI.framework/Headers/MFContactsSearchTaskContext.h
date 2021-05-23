/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSString;

@protocol MFContactsSearchConsumer;

@interface MFContactsSearchTaskContext : NSObject

{
    id <MFContactsSearchConsumer> _consumer;
    NSString *_text;
    NSMutableSet *_operations;
    NSMutableSet *_searchQueries;
}

@property (nonatomic, readonly) id <MFContactsSearchConsumer> consumer;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSMutableSet *operations;
@property (nonatomic, readonly) NSMutableSet *searchQueries;

+ (id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4;

- (_Bool)done;
- (_Bool)consumerRespondsToCallbacks;

@end
