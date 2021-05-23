/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSDictionary.h>

@class NSString, WFFileType;

@interface NSDictionary (WFLoggableObject)

@property (nonatomic, readonly) NSDictionary *propertiesForEventLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) WFFileType *wf_preferredFileType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)objectWithWFSerializedRepresentation:(id)arg1;

- (id)wf_mapAndFilterObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)wfSerializedRepresentation;
- (id)wfObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)wfObjectOfClass:(Class)arg1 forKeyPath:(id)arg2;

@end
