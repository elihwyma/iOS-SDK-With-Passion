//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class CoreDAVResponseItem, NSSet, NSURL;

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask
{
    NSSet *_propPatchRemoveElements;
    NSSet *_propPatchSetElements;
    CoreDAVResponseItem *_responseItem;
    BOOL _sendOrder;
    int _absoluteOrder;
    NSURL *_priorOrderedURL;
}

@property(retain, nonatomic) NSURL *priorOrderedURL; // @synthesize priorOrderedURL=_priorOrderedURL;
@property(nonatomic) int absoluteOrder; // @synthesize absoluteOrder=_absoluteOrder;
@property(retain, nonatomic) CoreDAVResponseItem *responseItem; // @synthesize responseItem=_responseItem;
@property(retain, nonatomic) NSSet *propPatchSetElements; // @synthesize propPatchSetElements=_propPatchSetElements;
@property(retain, nonatomic) NSSet *propPatchRemoveElements; // @synthesize propPatchRemoveElements=_propPatchRemoveElements;
// - (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)description;
- (id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3;
- (id)initWithURL:(id)arg1;

@end

