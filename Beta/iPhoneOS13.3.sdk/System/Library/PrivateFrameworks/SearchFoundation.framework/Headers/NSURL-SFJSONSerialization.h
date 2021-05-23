/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSURL.h>

@class NSData, NSDictionary, NSString;

@interface NSURL (SFJSONSerialization)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

@end
