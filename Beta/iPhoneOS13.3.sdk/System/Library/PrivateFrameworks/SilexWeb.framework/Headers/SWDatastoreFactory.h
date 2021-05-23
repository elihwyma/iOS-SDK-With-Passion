/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SWLogger;

@interface SWDatastoreFactory : NSObject

{
    id <SWLogger> _logger;
}

@property (nonatomic, readonly) id <SWLogger> logger;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithLogger:(id)arg1;
- (id)createDatastoreFromMessage:(id)arg1;

@end
