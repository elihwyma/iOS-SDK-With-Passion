/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFContentSniffer : NSObject

+ (id)MIMETypeForData:(id)arg1 andString:(id)arg2;
+ (id)MIMETypeForString:(id)arg1;
+ (id)MIMETypeForData:(id)arg1;
+ (_Bool)MIMETypeIsHTMLOrText:(id)arg1;
+ (_Bool)isXML:(id)arg1;
+ (_Bool)isXHTML:(id)arg1;
+ (_Bool)isHTML:(id)arg1;
+ (_Bool)isGIF:(id)arg1;
+ (_Bool)isJPEG:(id)arg1;
+ (_Bool)isPDF:(id)arg1;
+ (_Bool)isPNG:(id)arg1;
+ (_Bool)isSWF:(id)arg1;
+ (_Bool)isWord:(id)arg1;
+ (_Bool)isOctetStream:(id)arg1;

@end
