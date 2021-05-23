/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString, SWDatastore, WKUserScript;

@interface SWDatastoreSetupScript : NSObject

{
    SWDatastore *_datastore;
}

@property (nonatomic, readonly) SWDatastore *datastore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) WKUserScript *userScript;
@property (nonatomic, readonly) NSString *executableScript;
@property (nonatomic, readonly) _Bool queueable;

+ (id)source;

- (id)initWithDatastore:(id)arg1;

@end
