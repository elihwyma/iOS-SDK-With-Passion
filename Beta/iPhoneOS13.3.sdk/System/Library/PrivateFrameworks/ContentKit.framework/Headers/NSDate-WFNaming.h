/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (WFNaming)

@property (copy, nonatomic, readonly) NSString *wfName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (id)wfSerializedRepresentation;
- (id)wf_formattedStringWithDateStyle:(id)arg1 timeStyle:(id)arg2 relativeDateStyle:(id)arg3 customDateFormat:(id)arg4 includeTimeForISO8601:(_Bool)arg5;

@end
