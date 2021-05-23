/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class JSContext, JSValue, NSString, TMLMetaContext, TMLMetaObject;

@interface TMLCloneContext : NSObject

{
    TMLMetaContext *_metaContext;
    JSContext *_jsContext;
    JSValue *_apiObject;
    NSString *_apiObjectKey;
}

@property (nonatomic, readonly) TMLMetaContext *metaContext;
@property (nonatomic) JSContext *jsContext;
@property (nonatomic) JSValue *apiObject;
@property (copy, nonatomic) NSString *apiObjectKey;
@property (nonatomic, readonly) TMLMetaObject *rootObject;

- (id)initWithMetaContext:(id)arg1;

@end
