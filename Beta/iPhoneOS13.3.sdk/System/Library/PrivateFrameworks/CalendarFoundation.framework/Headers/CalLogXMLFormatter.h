/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CalLogXMLFormatter : NSObject

{
    _Bool _shouldPrettyPrint;
    _Bool _useTinyElementNames;
}

@property (nonatomic) _Bool shouldPrettyPrint;
@property (nonatomic) _Bool useTinyElementNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)newFormattedString:(id)arg1;

@end
