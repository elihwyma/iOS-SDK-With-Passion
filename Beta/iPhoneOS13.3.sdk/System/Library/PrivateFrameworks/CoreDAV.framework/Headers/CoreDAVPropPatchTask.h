/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVResponseItem, NSSet, NSURL;

@protocol CoreDAVPropPatchTaskDelegate;

@interface CoreDAVPropPatchTask

{
    NSSet *_propPatchRemoveElements;
    NSSet *_propPatchSetElements;
    CoreDAVResponseItem *_responseItem;
    _Bool _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property (retain, nonatomic) NSSet *propPatchRemoveElements;
@property (retain, nonatomic) NSSet *propPatchSetElements;
@property (retain, nonatomic) CoreDAVResponseItem *responseItem;
@property (weak, nonatomic) id <CoreDAVPropPatchTaskDelegate> delegate;
@property (retain, nonatomic) NSURL *priorOrderedURL;
@property (nonatomic) int absoluteOrder;

- (id)description;
- (id)initWithURL:(id)arg1;
- (id)httpMethod;
- (id)requestBody;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3;

@end
