/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, SWDatastore, WKUserScript;

@protocol SWSession;

@interface SWDatastoreUpdateScript : NSObject

{
    SWDatastore *_datastore;
    SWDatastore *_oldDatastore;
    id <SWSession> _originatingSession;
}

@property (nonatomic, readonly) SWDatastore *datastore;
@property (nonatomic, readonly) SWDatastore *oldDatastore;
@property (nonatomic, readonly) id <SWSession> originatingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WKUserScript *userScript;
@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) _Bool queueable;

+ (id)source;

- (id)initWithDatastore:(id)arg1 oldDatastore:(id)arg2 originatingSession:(id)arg3;

@end
