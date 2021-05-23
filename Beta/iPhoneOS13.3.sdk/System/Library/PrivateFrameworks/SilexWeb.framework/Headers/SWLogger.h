/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface SWLogger : NSObject

{
    NSMutableDictionary *_values;
}

@property (nonatomic, readonly) NSMutableDictionary *values;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)log:(id)arg1;
- (void)bindValue:(id)arg1 forKey:(id)arg2;
- (void)logSensitive:(id)arg1;
- (id)constructLogWithMessage:(id)arg1;

@end
