/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/Swift-Protocol.h>

@protocol RWIProtocolDOMDomainHandler <Swift>

- (unsigned short)getEventListenersForNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)performSearchWithErrorCallback:successCallback:query:nodeIds:caseSensitive: /* Error: Ran out of types for this method. */;
- (unsigned short)getDocumentWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)requestChildNodesWithErrorCallback:successCallback:nodeId:depth: /* Error: Ran out of types for this method. */;
- (unsigned short)querySelectorWithErrorCallback:successCallback:nodeId:selector: /* Error: Ran out of types for this method. */;
- (unsigned short)querySelectorAllWithErrorCallback:successCallback:nodeId:selector: /* Error: Ran out of types for this method. */;
- (unsigned short)setNodeNameWithErrorCallback:successCallback:nodeId:name: /* Error: Ran out of types for this method. */;
- (unsigned short)setNodeValueWithErrorCallback:successCallback:nodeId:value: /* Error: Ran out of types for this method. */;
- (unsigned short)removeNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)setAttributeValueWithErrorCallback:successCallback:nodeId:name:value: /* Error: Ran out of types for this method. */;
- (unsigned short)setAttributesAsTextWithErrorCallback:successCallback:nodeId:text:name: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAttributeWithErrorCallback:successCallback:nodeId:name: /* Error: Ran out of types for this method. */;
- (unsigned short)getSupportedEventNamesWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)getDataBindingsForNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)getAssociatedDataForNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)setEventListenerDisabledWithErrorCallback:successCallback:eventListenerId:disabled: /* Error: Ran out of types for this method. */;
- (unsigned short)setBreakpointForEventListenerWithErrorCallback:successCallback:eventListenerId: /* Error: Ran out of types for this method. */;
- (unsigned short)removeBreakpointForEventListenerWithErrorCallback:successCallback:eventListenerId: /* Error: Ran out of types for this method. */;
- (unsigned short)getAccessibilityPropertiesForNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)getOuterHTMLWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)setOuterHTMLWithErrorCallback:successCallback:nodeId:outerHTML: /* Error: Ran out of types for this method. */;
- (unsigned short)insertAdjacentHTMLWithErrorCallback:successCallback:nodeId:position:html: /* Error: Ran out of types for this method. */;
- (unsigned short)getSearchResultsWithErrorCallback:successCallback:searchId:fromIndex:toIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)discardSearchResultsWithErrorCallback:successCallback:searchId: /* Error: Ran out of types for this method. */;
- (unsigned short)requestNodeWithErrorCallback:successCallback:objectId: /* Error: Ran out of types for this method. */;
- (unsigned short)setInspectModeEnabledWithErrorCallback:successCallback:enabled:highlightConfig:showRulers: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightRectWithErrorCallback:successCallback:x:y:width:height:color:outlineColor:usePageCoordinates: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightQuadWithErrorCallback:successCallback:quad:color:outlineColor:usePageCoordinates: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightSelectorWithErrorCallback:successCallback:highlightConfig:selectorString:frameId: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightNodeWithErrorCallback:successCallback:highlightConfig:nodeId:objectId: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightNodeListWithErrorCallback:successCallback:nodeIds:highlightConfig: /* Error: Ran out of types for this method. */;
- (unsigned short)hideHighlightWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)highlightFrameWithErrorCallback:successCallback:frameId:contentColor:contentOutlineColor: /* Error: Ran out of types for this method. */;
- (unsigned short)pushNodeByPathToFrontendWithErrorCallback:successCallback:path: /* Error: Ran out of types for this method. */;
- (unsigned short)resolveNodeWithErrorCallback:successCallback:nodeId:objectGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)getAttributesWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)moveToWithErrorCallback:successCallback:nodeId:targetNodeId:insertBeforeNodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)undoWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)redoWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)markUndoableStateWithErrorCallback:successCallback: /* Error: Ran out of types for this method. */;
- (unsigned short)focusWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;
- (unsigned short)setInspectedNodeWithErrorCallback:successCallback:nodeId: /* Error: Ran out of types for this method. */;

@end
