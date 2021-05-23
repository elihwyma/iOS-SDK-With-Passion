/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSString.h>

@interface NSString (CoreDAVExtensions)

+ (id)CDVStringWithNameSpace:(id)arg1 andName:(id)arg2;
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1 pathTag:(id)arg2;
+ (id)CDVStringWithNumberOfSpaces:(unsigned long long)arg1;
+ (id)CDVPreconditionHeaderValueWithCTag:(id)arg1;

- (id)CDVStringByXMLUnquoting;
- (id)CDVStringByAppendingSlashIfNeeded;
- (id)CDVStringByRemovingTerminatingSlashIfNeeded;
- (_Bool)CDVIsHTTPStatusLineWithStatusCode:(long long)arg1;
- (id)initWithCDVNameSpace:(id)arg1 andName:(id)arg2;
- (id)CDVStringByRemovingPercentEscapesForHREF;
- (id)CDVStringByAddingPercentEscapesForHREF;
- (id)CDVStringByAddingPercentEscapesForHREFIncludingPercent;
- (id)CDVStringByAddingPercentEscapesForUserOrPassword;
- (id)CDVStringByXMLQuoting;

@end
